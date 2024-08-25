# Write your MySQL query statement below
select author_id as id
from Views
where viewer_id=author_id 
group by id 
order by id asc;
