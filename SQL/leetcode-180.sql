SELECT DISTINCT L.num AS ConsecutiveNums
FROM Logs L
WHERE (L.id + 1) IN (
    SELECT id
    FROM Logs
    WHERE L.num = Logs.num
) AND (L.id + 2) IN (
    SELECT id
    FROM Logs
    WHERE L.num = Logs.num
)