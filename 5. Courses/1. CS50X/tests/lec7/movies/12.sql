SELECT movies.title
FROM stars AS sc
JOIN stars AS sl ON sc.movie_id = sl.movie_id
JOIN movies ON sc.movie_id = movies.id
JOIN people AS p1 ON sc.person_id = p1.id
JOIN people AS p2 ON sl.person_id = p2.id
WHERE p1.name = 'Bradley Cooper'
AND p2.name = 'Jennifer Lawrence';
