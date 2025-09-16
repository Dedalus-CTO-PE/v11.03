create table patbrfaf
(
dptbrbil    char(8),
ptbrdoct    char(6),
ptbronum    char(8),
ptbrauth    char(15),
ptbrtype    char(3),
ptbrfdoc    char(20),
ptbrspar    char(27),
lf          char(1)
);
create unique index patbrfa1 on patbrfaf
(
dptbrbil
);
revoke all on patbrfaf from public ; 
grant select on patbrfaf to public ; 
