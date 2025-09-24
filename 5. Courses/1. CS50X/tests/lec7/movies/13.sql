SELECT DISTINCT people.name
FROM stars
JOIN movies ON stars.movie_id = movies.id
JOIN people ON stars.person_id = people.id
WHERE movies.id IN (
    SELECT movie_id
    FROM stars
    JOIN people ON stars.person_id = people.id
    WHERE people.name = 'Kevin Bacon' AND people.birth = 1958
)
AND people.name != 'Kevin Bacon';
