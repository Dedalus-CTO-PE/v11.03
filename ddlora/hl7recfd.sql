create table hl7recaf
(
  dh7remes    varchar2(20) default ' ' not null,
  h7restat    varchar2(1) default ' ' not null,
  h7redttm    varchar2(16) default ' ' not null,
  h7remtyp    varchar2(7) default ' ' not null,
  h7reurno    varchar2(8) default ' ' not null,
  h7redtpr    varchar2(16) default ' ' not null,
  h7respar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint hl7reca1 primary key( 
dh7remes)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index hl7reca2 on hl7recaf
(
h7restat,
h7redttm,
dh7remes
)
  tablespace pas_indx; 
create unique index hl7reca3 on hl7recaf
(
h7reurno,
h7redttm,
dh7remes
)
  tablespace pas_indx; 
