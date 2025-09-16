create table resheaaf
(
  rehardt     varchar2(8) default ' ' not null,
  rehartm     varchar2(5) default ' ' not null,
  reharun     varchar2(4) default ' ' not null,
  rehafur     varchar2(1) default ' ' not null,
  rehapid     varchar2(16) default ' ' not null,
  rehavis     varchar2(8) default ' ' not null,
  rehasid     varchar2(10) default ' ' not null,
  rehamdt     varchar2(8) default ' ' not null,
  rehamtm     varchar2(5) default ' ' not null,
  rehamid     varchar2(20) default ' ' not null,
  rehapap     varchar2(6) default ' ' not null,
  rehapor     varchar2(20) default ' ' not null,
  rehafap     varchar2(6) default ' ' not null,
  rehafor     varchar2(20) default ' ' not null,
  rehausc     varchar2(12) default ' ' not null,
  rehaucs     varchar2(12) default ' ' not null,
  rehanor     varchar2(1) default ' ' not null,
  rehacdt     varchar2(8) default ' ' not null,
  rehactm     varchar2(5) default ' ' not null,
  rehacid     varchar2(40) default ' ' not null,
  rehafci     varchar2(1) default ' ' not null,
  rehasdt     varchar2(8) default ' ' not null,
  rehastm     varchar2(5) default ' ' not null,
  rehaoid     varchar2(8) default ' ' not null,
  rehaosn     varchar2(25) default ' ' not null,
  rehaogn     varchar2(20) default ' ' not null,
  reharrd     varchar2(8) default ' ' not null,
  reharrt     varchar2(5) default ' ' not null,
  rehadss     varchar2(10) default ' ' not null,
  rehared     varchar2(8) default ' ' not null,
  reharet     varchar2(5) default ' ' not null,
  reharst     varchar2(2) default ' ' not null,
  rehaiby     varchar2(30) default ' ' not null,
  rehaadc     varchar2(6) default ' ' not null,
  rehalab     varchar2(3) default ' ' not null,
  rehaloc     varchar2(25) default ' ' not null,
  reharde     varchar2(3) default ' ' not null,
  rehaspa     varchar2(30) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint resheaa1 primary key( 
rehardt,
rehartm,
reharun)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index resheaa2 on resheaaf
(
rehafap,
rehafor,
rehardt,
rehartm,
reharun
)
  tablespace pas_indx; 
create unique index resheaa3 on resheaaf
(
rehapid,
rehaucs,
rehausc,
rehardt,
rehartm,
reharun
)
  tablespace pas_indx; 
