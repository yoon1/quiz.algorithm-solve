SELECT A.HOUR, COUNT(B.DATETIME) AS COUNT
FROM (SELECT AA-1 AS HOUR FROM DUAL CONNECT BY AA <=24) A, ANIMAL_OUTS B
WHERE A.HOUR = TO_CHAR(B.DATETIME(+), 'HH24')
GROUP BY A.HOUR
ORDER BY A.HOUR