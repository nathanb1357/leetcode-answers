USE LeetcodeDB

SELECT Scores.score, COUNT(Ranking.score) AS rank
FROM Scores, (
    SELECT DISTINCT score
    FROM Scores
) Ranking
WHERE Scores.score <= Ranking.score
GROUP BY Scores.id, Scores.score
ORDER BY Scores.score DESC