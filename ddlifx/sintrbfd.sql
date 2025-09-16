create table sintrbaf
(
sitbnum     char(8),
sitbuni     char(3),
sitbtyp     char(1),
sitbper     char(6),
sitbcat     char(7),
sitbwar     char(5),
sitbqty     decimal(14,2),
sitbcst     decimal(14,2),
sitbbch     char(5),
sitbled     char(2),
sitbacc     char(12),
sitbspa     char(28),
lf          char(1)
);
create unique index sintrba1 on sintrbaf
(
sitbnum,
sitbuni
);
create unique index sintrba2 on sintrbaf
(
sitbled,
sitbacc,
sitbbch,
sitbnum,
sitbuni
);
revoke all on sintrbaf from public ; 
grant select on sintrbaf to public ; 
