#include <iostream>
#include <string>

using namespace std;

int main()
{
    string expr;
    cout << "Enter an arithmetic expression: ";
    getline(cin, expr);

    int temp_num = 1; // used for generating temporary variable names

    // parse the expression and generate three-address code
    string result = "";
    int i = 0;
    while (i < expr.length())
    {
        if (isdigit(expr[i]))
        {
            // found a digit, read the whole number
            string num = "";
            while (i < expr.length() && isdigit(expr[i]))
            {
                num += expr[i];
                i++;
            }
            result += "t" + to_string(temp_num) + " = " + num + "\n";
            temp_num++;
        }
        else if (expr[i] == '+' || expr[i] == '-' || expr[i] == '*' || expr[i] == '/')
        {
            // found an operator
            result += "t" + to_string(temp_num) + " = ";
            result += expr[i] + " ";
            temp_num++;
            i++;
        }
        else
        {
            // ignore spaces
            i++;
        }
    }

    cout << "Three-address code:\n"
         << result;

    return 0;
}
