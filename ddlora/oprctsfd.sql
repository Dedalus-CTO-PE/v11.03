create table oprctsaf
(
  opctdate    varchar2(8) default ' ' not null,
  opctclin    varchar2(6) default ' ' not null,
  opctperd    varchar2(1) default ' ' not null,
  opctuser    varchar2(3) default ' ' not null,
  opctncas    number(6,0) default 0 not null,
  opctnopr    number(6,0) default 0 not null,
  opcttime    number(6,0) default 0 not null,
  opctdofw    number(1,0) default 0 not null,
  opctspar    varchar2(7) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint oprctsa1 primary key( 
opctdate,
opctclin,
opctperd,
opctuser)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
