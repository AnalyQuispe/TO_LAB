#include <iostream>
#include <memory>
#include <string>

// Clase abstracta para los nodos del árbol
class ExpressionNode {
public:
    virtual ~ExpressionNode() = default;
    virtual int evaluate() const = 0;
};

// Nodo para valores constantes
class ValueNode : public ExpressionNode {
    int value;
public:
    ValueNode(int val) : value(val) {}
    int evaluate() const override {
        return value;
    }
};

// Nodo para operaciones binarias (suma o multiplicación)
class OperatorNode : public ExpressionNode {
    char op; // '+' para suma, '*' para multiplicación
    std::unique_ptr<ExpressionNode> left;
    std::unique_ptr<ExpressionNode> right;
public:
    OperatorNode(char oper, std::unique_ptr<ExpressionNode> l, std::unique_ptr<ExpressionNode> r)
        : op(oper), left(std::move(l)), right(std::move(r)) {}

    int evaluate() const override {
        int leftVal = left->evaluate();
        int rightVal = right->evaluate();
        
        if (op == '+') return leftVal + rightVal;
        if (op == '*') return leftVal * rightVal;
        
        throw std::invalid_argument("Operador desconocido");
    }
};

// Función para construir un árbol de expresión binaria
std::unique_ptr<ExpressionNode> buildExpressionTree() {
    // Ejemplo: (3 + 4) * 5
    return std::make_unique<OperatorNode>(
        '*',
        std::make_unique<OperatorNode>(
            '+',
            std::make_unique<ValueNode>(3),
            std::make_unique<ValueNode>(4)
        ),
        std::make_unique<ValueNode>(5)
    );
}

int main() {
    // Construir el árbol de expresión
    auto root = buildExpressionTree();
    
    // Evaluar el árbol
    std::cout << "El resultado de la expresión es: " << root->evaluate() << std::endl;
    
    return 0;
}

