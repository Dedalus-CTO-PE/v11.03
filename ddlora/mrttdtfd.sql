create table mrttdtaf
(
  mrtdtmno    varchar2(4) default ' ' not null,
  mrtdrect    varchar2(1) default ' ' not null,
  mrtdseqn    varchar2(3) default ' ' not null,
  mrtddest    varchar2(1) default ' ' not null,
  mrtddecd    varchar2(9) default ' ' not null,
  mrtddesc    varchar2(200) default ' ' not null,
  mrtdspar    varchar2(80) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrttdtr1 primary key( 
mrtdtmno,
mrtdrect,
mrtdseqn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
