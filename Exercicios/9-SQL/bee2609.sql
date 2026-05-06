select 
    c.name,
    SUM(p.amount) as sum 
from 
    categories as c
join
    products as p on p.id_categories = c.id
GROUP BY
    c.name
