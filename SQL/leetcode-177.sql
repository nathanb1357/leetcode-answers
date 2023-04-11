USE LeetcodeDB


CREATE FUNCTION getNthHighestSalary(
    @N INT
) RETURNS INT AS
BEGIN
    RETURN (
        SELECT MAX(salary)
        FROM (
            SELECT ROW_NUMBER()
                OVER(ORDER BY salary DESC)
                AS ranking, salary
            FROM (
                SELECT DISTINCT salary
                FROM Employee
            ) AS A
        ) AS B
        WHERE ranking = @N
    );
END