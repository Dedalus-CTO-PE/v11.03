create table fmsrdfaf
(
  fmrdcod     char(3) default ' ' not null,
  fmrddes     char(35) default ' ' not null,
  fmrdled     char(2) default ' ' not null,
  fmrdrep     char(2) default ' ' not null,
  fmrdrs      char(3) default ' ' not null,
  fmrdpt      char(2) default ' ' not null,
  fmrdlev     char(3) default ' ' not null,
  fmrdfpr     char(5) default ' ' not null,
  fmrdtpr     char(5) default ' ' not null,
  fmrdcas     decimal(1,0) default 0 not null,
  fmrdcbt     char(4) default ' ' not null,
  fmrdpbt     char(4) default ' ' not null,
  fmrddop     decimal(1,0) default 0 not null,
  fmrdzer     decimal(1,0) default 0 not null,
  fmrdprj     decimal(1,0) default 0 not null,
  fmrdstat    decimal(1,0) default 0 not null,
  fmrdsupp    char(1) default ' ' not null,
  fmrdshed    char(1) default ' ' not null,
  fmrdcrin    char(1) default ' ' not null,
  fmrdspar    char(9) default ' ' not null,
  lf          char(1)
);
create unique index fmsrdfa1 on fmsrdfaf
(
fmrdcod
);
revoke all on fmsrdfaf from public ; 
grant select on fmsrdfaf to public ; 
