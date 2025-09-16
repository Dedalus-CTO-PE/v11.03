create table sinscfaf
(
  sisfcon     varchar2(10) default ' ' not null,
  sisfsup     varchar2(5) default ' ' not null,
  sisfcat     varchar2(7) default ' ' not null,
  sisfsut     varchar2(15) default ' ' not null,
  sisfaqt     number(14,2) default 0 not null,
  sisfapc     number(14,2) default 0 not null,
  sisfeqt     number(14,2) default 0 not null,
  sisfect     number(14,2) default 0 not null,
  sisfur1     varchar2(15) default ' ' not null,
  sisfur2     varchar2(15) default ' ' not null,
  sisfud1     varchar2(8) default ' ' not null,
  sisfud2     varchar2(8) default ' ' not null,
  sisfuy1     varchar2(1) default ' ' not null,
  sisfuy2     varchar2(1) default ' ' not null,
  sisfspa     varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint sinscfa1 primary key( 
sisfcon,
sisfsup,
sisfcat,
sisfsut)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
