create table watmesaf
(
waurno      char(8),
waproc      char(9),
dwacnt      char(2),
dwacnt2     char(2),
watext      char(70),
waspare     char(20),
lf          char(1)
);
create unique index watmesa1 on watmesaf
(
waurno,
waproc,
dwacnt,
dwacnt2
);
revoke all on watmesaf from public ; 
grant select on watmesaf to public ; 
