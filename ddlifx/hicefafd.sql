create table hicefaaf
(
  hcearnum    char(3) default ' ' not null,
  hceacntr    char(5) default ' ' not null,
  hceapayn    decimal(3,0) default 0 not null,
  hceapmci    char(8) default ' ' not null,
  hceatamt    decimal(14,2) default 0 not null,
  hceapdat    char(8) default ' ' not null,
  hceafnam    char(30) default ' ' not null,
  hceaspar    char(15) default ' ' not null,
  lf          char(1)
);
create unique index hicefaa1 on hicefaaf
(
hcearnum,
hceacntr
);
create unique index hicefaa2 on hicefaaf
(
hceapdat,
hcearnum,
hceacntr
);
revoke all on hicefaaf from public ; 
grant select on hicefaaf to public ; 
