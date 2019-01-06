#ifndef SQLPARSER_INSERT_STATEMENT_H
#define SQLPARSER_INSERT_STATEMENT_H

#include "SQLStatement.h"
#include "SelectStatement.h"

namespace hsql {
  enum InsertType {
    kInsertValues,
    kInsertSelect
  };

  struct InsertValue
  {
      InsertValue():values(nullptr) {}
      ~InsertValue()
      {
          if (values != nullptr)
          {
              for (Expr* expr : *values) {
                  delete expr;
              }
              delete values;
          }
          values = nullptr;
      }
      std::vector<Expr*>* values;
  };

  struct InsertValueList
  {
      InsertValueList():values(nullptr) {}
      ~InsertValueList()
      {
          if (values != nullptr)
          {
              for (InsertValue* insertValue : *values) {
                  delete insertValue;
              }
              delete values;
          }
          values = nullptr;
      }
      std::vector<InsertValue*>* values;
  };

  // Represents SQL Insert statements.
  // Example: "INSERT INTO students VALUES ('Max', 1112233, 'Musterhausen', 2.3)"
  struct InsertStatement : SQLStatement {
    InsertStatement(InsertType type);
    virtual ~InsertStatement();

    InsertType type;
    char* schema;
    char* tableName;
    // std::vector<char*>* columns;
    // std::vector<Expr*>* values;
    std::vector<InsertValue*>* values;
    SelectStatement* select;
  };

} // namsepace hsql

#endif
