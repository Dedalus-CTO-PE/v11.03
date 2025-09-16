create table amsgilaf
(
  amgigic     char(5) default ' ' not null,
  amgides     char(35) default ' ' not null,
  amgidis     char(5) default ' ' not null,
  amgires     char(4) default ' ' not null,
  amgiled     char(2) default ' ' not null,
  amgiadp     char(12) default ' ' not null,
  amgiedp     char(12) default ' ' not null,
  amgicap     char(12) default ' ' not null,
  amgilos     char(12) default ' ' not null,
  amgipro     char(12) default ' ' not null,
  amgirvr     char(12) default ' ' not null,
  amgiret     char(12) default ' ' not null,
  amgisal     char(12) default ' ' not null,
  amgiud1     char(8) default ' ' not null,
  amgiud2     char(8) default ' ' not null,
  amgiuy1     char(1) default ' ' not null,
  amgiuy2     char(1) default ' ' not null,
  amgispa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsgila1 on amsgilaf
(
amgigic
);
revoke all on amsgilaf from public ; 
grant select on amsgilaf to public ; 
