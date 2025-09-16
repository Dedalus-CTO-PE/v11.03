create table patonhaf
(
  ptonvisn    varchar2(8) default ' ' not null,
  ptonvavl    varchar2(2) default ' ' not null,
  ptontdat    varchar2(8) default ' ' not null,
  ptonttim    varchar2(8) default ' ' not null,
  ptonurid    varchar2(10) default ' ' not null,
  ptonreah    varchar2(3) default ' ' not null,
  ptondesc    varchar2(80) default ' ' not null,
  ptonhact    varchar2(1) default ' ' not null,
  ptonclcd    varchar2(3) default ' ' not null,
  ptonhlfu    varchar2(6) default ' ' not null,
  ptonhlin    varchar2(8) default ' ' not null,
  ptonspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patonha1 primary key( 
ptonvisn,
ptontdat,
ptonttim)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
