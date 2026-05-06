# Write your MySQL query statement below
SELECT e.name, b.bonus
FROM Employee AS e
LEFT JOIN bonus AS b ON b.empId = e.empId
WHERE b.bonus < 1000 OR bonus IS NULL;