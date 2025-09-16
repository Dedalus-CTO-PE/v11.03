create table mrtresaf
(
  mrrskey     varchar2(10) default ' ' not null,
  mrrsdate    varchar2(8) default ' ' not null,
  mrrstime    varchar2(5) default ' ' not null,
  mrrsdept    varchar2(4) default ' ' not null,
  mrrsreqs    varchar2(6) default ' ' not null,
  mrrsreas    varchar2(4) default ' ' not null,
  mrrsresv    varchar2(8) default ' ' not null,
  mrrsrhos    varchar2(3) default ' ' not null,
  mrrsspar    varchar2(21) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtresa1 primary key( 
mrrskey,
mrrsdate,
mrrstime)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index mrtresa2 on mrtresaf
(
mrrsresv,
mrrsdate,
mrrstime,
mrrskey
)
  tablespace pas_indx; 
