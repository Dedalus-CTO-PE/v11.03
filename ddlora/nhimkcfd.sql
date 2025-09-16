create table nhimkcaf
(
  nhmkktyp    varchar2(2) default ' ' not null,
  nhmkkitm    varchar2(6) default ' ' not null,
  nhmkkkwd    varchar2(15) default ' ' not null,
  nhmkspar    varchar2(22) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint nhimkca1 primary key( 
nhmkktyp,
nhmkkitm,
nhmkkkwd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index nhimkca2 on nhimkcaf
(
nhmkkkwd,
nhmkktyp,
nhmkkitm
)
  tablespace pas_indx; 
