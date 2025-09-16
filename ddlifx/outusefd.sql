create table outuseaf
(
oussite     char(6),
ousclin     char(6),
ousdate     char(8),
ousstrt     char(5),
ousacst     char(5),
ousacend    char(5),
ousdly      char(3),
ousspare    char(11),
lf          char(1)
);
create unique index outusea1 on outuseaf
(
oussite,
ousclin,
ousdate,
ousstrt
);
revoke all on outuseaf from public ; 
grant select on outuseaf to public ; 
