-- Last updated: 6/24/2026, 8:52:46 PM
 select FirstName, LastName, City, State
from Person left join Address
on Person.PersonId = Address.PersonId
;