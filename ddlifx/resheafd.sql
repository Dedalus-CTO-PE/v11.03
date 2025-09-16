create table resheaaf
(
  rehardt     char(8) default ' ' not null,
  rehartm     char(5) default ' ' not null,
  reharun     char(4) default ' ' not null,
  rehafur     char(1) default ' ' not null,
  rehapid     char(16) default ' ' not null,
  rehavis     char(8) default ' ' not null,
  rehasid     char(10) default ' ' not null,
  rehamdt     char(8) default ' ' not null,
  rehamtm     char(5) default ' ' not null,
  rehamid     char(20) default ' ' not null,
  rehapap     char(6) default ' ' not null,
  rehapor     char(20) default ' ' not null,
  rehafap     char(6) default ' ' not null,
  rehafor     char(20) default ' ' not null,
  rehausc     char(12) default ' ' not null,
  rehaucs     char(12) default ' ' not null,
  rehanor     char(1) default ' ' not null,
  rehacdt     char(8) default ' ' not null,
  rehactm     char(5) default ' ' not null,
  rehacid     char(40) default ' ' not null,
  rehafci     char(1) default ' ' not null,
  rehasdt     char(8) default ' ' not null,
  rehastm     char(5) default ' ' not null,
  rehaoid     char(8) default ' ' not null,
  rehaosn     char(25) default ' ' not null,
  rehaogn     char(20) default ' ' not null,
  reharrd     char(8) default ' ' not null,
  reharrt     char(5) default ' ' not null,
  rehadss     char(10) default ' ' not null,
  rehared     char(8) default ' ' not null,
  reharet     char(5) default ' ' not null,
  reharst     char(2) default ' ' not null,
  rehaiby     char(30) default ' ' not null,
  rehaadc     char(6) default ' ' not null,
  rehalab     char(3) default ' ' not null,
  rehaloc     char(25) default ' ' not null,
  reharde     char(3) default ' ' not null,
  rehaspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index resheaa1 on resheaaf
(
rehardt,
rehartm,
reharun
);
create unique index resheaa2 on resheaaf
(
rehafap,
rehafor,
rehardt,
rehartm,
reharun
);
create unique index resheaa3 on resheaaf
(
rehapid,
rehaucs,
rehausc,
rehardt,
rehartm,
reharun
);
revoke all on resheaaf from public ; 
grant select on resheaaf to public ; 
