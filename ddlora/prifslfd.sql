create table prifslaf
(
  prfsseid    varchar2(4) default ' ' not null,
  prfsdebt    varchar2(8) default ' ' not null,
  dprfssca    varchar2(2) default ' ' not null,
  dprfsuni    varchar2(8) default ' ' not null,
  prfsprac    varchar2(6) default ' ' not null,
  prfssdoc    varchar2(10) default ' ' not null,
  prfspind    varchar2(3) default ' ' not null,
  prfsosmt    number(9,2) default 0 not null,
  prfsstat    varchar2(1) default ' ' not null,
  prfsspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint prifsla1 primary key( 
prfsseid,
prfsdebt,
dprfssca,
dprfsuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
