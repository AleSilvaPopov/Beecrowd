select
    p.id,
    p.name
from
    products as p
join
    categories as c ON p.id_categories = c.id 
where
    c.name LIKE 'super%';
