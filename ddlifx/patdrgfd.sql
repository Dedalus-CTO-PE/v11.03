create table patdrgaf
(
drgfdte     char(8),
drgtdte     char(8),
drgyr       char(4),
drgnum      char(2),
drgcyr      char(4),
drgcnum     char(2),
drgldsc     char(20),
drgmdsc     char(9),
drgsdsc     char(3),
drgspar     char(10),
lf          char(1)
);
create unique index patdrga1 on patdrgaf
(
drgyr,
drgnum
);
create unique index patdrga2 on patdrgaf
(
drgtdte,
drgyr,
drgnum
);
create unique index patdrga3 on patdrgaf
(
drgcyr,
drgcnum
);
revoke all on patdrgaf from public ; 
grant select on patdrgaf to public ; 
