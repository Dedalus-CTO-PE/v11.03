create table dismasaf
(
  dsmacode    varchar2(9) default ' ' not null,
  dsmadesc    varchar2(60) default ' ' not null,
  dsmasdat    varchar2(8) default ' ' not null,
  dsmastim    varchar2(8) default ' ' not null,
  dsmaedat    varchar2(8) default ' ' not null,
  dsmaetim    varchar2(8) default ' ' not null,
  dsmaaicd    varchar2(3) default ' ' not null,
  dsmaactv    varchar2(1) default ' ' not null,
  dsmacusr    varchar2(10) default ' ' not null,
  dsmacdat    varchar2(8) default ' ' not null,
  dsmactim    varchar2(8) default ' ' not null,
  dsmauusr    varchar2(10) default ' ' not null,
  dsmaudat    varchar2(8) default ' ' not null,
  dsmautim    varchar2(8) default ' ' not null,
  dsmaspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint dismasa1 primary key( 
dsmacode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
