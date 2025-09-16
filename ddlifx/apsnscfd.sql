create table apsnscaf
(
  apnsbch     char(5) default ' ' not null,
  apnsuni     char(3) default ' ' not null,
  apnsna1     char(30) default ' ' not null,
  apnsna2     char(30) default ' ' not null,
  apnsad1     char(25) default ' ' not null,
  apnsad2     char(25) default ' ' not null,
  apnsad3     char(25) default ' ' not null,
  apnspc      char(6) default ' ' not null,
  apnsabn     char(11) default ' ' not null,
  apnsgreg    decimal(1,0) default 0 not null,
  apnsspa     char(10) default ' ' not null,
  lf          char(1)
);
create unique index apsnsca1 on apsnscaf
(
apnsbch,
apnsuni
);
create unique index apsnsca2 on apsnscaf
(
apnsbch,
apnsna1,
apnsuni
);
revoke all on apsnscaf from public ; 
grant select on apsnscaf to public ; 
