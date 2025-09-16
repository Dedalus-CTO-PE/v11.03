create table oprtqeaf
(
optqunid    char(10),
optqrtyp    char(1),
optqcntr    char(2),
optqadat    char(8),
optqatim    char(8),
optqrdat    char(8),
optqrtim    char(8),
optqcomm    char(10),
optqspar    char(3),
lf          char(1)
);
create unique index oprtqea1 on oprtqeaf
(
optqunid,
optqrtyp,
optqcntr
);
revoke all on oprtqeaf from public ; 
grant select on oprtqeaf to public ; 
