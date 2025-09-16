create table patonlvf
(
oward       char(3),
obed        char(3),
doadmno     char(8),
oerdate     char(8),
oroom       char(3),
oertime     char(8),
ospare      char(9),
lf          char(1)
);
create unique index patonlv1 on patonlvf
(
oward,
obed,
doadmno
);
create unique index patonlv2 on patonlvf
(
doadmno,
oward,
obed
);
revoke all on patonlvf from public ; 
grant select on patonlvf to public ; 
