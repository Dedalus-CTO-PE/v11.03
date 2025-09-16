create table fmsnrjaf
(
  fmnjuid     char(4) default ' ' not null,
  fmnjseq     char(3) default ' ' not null,
  fmnjdes     char(35) default ' ' not null,
  fmnjsta     decimal(1,0) default 0 not null,
  fmnjtyp     decimal(1,0) default 0 not null,
  fmnjrep     char(3) default ' ' not null,
  fmnjcmd     char(50) default ' ' not null,
  fmnjspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index fmsnrja1 on fmsnrjaf
(
fmnjuid,
fmnjseq
);
revoke all on fmsnrjaf from public ; 
grant select on fmsnrjaf to public ; 
