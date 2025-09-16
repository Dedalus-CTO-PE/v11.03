create table patasfaf
(
dptafadm    char(8),
ptaftype    char(1),
ptafdate    char(8),
ptaftime    char(8),
ptafcode    char(1),
ptafctyp    char(1),
ptafcrol    char(1),
ptafcsid    char(5),
ptafspar    char(5),
lf          char(1)
);
create unique index patasfa1 on patasfaf
(
dptafadm,
ptaftype,
ptafdate,
ptaftime
);
revoke all on patasfaf from public ; 
grant select on patasfaf to public ; 
