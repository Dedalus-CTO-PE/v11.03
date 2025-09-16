create table mrtqueaf
(
  dmrqumes    varchar2(20) default ' ' not null,
  mrmaurno    varchar2(8) default ' ' not null,
  mrmadoty    varchar2(3) default ' ' not null,
  mrmahloc    varchar2(4) default ' ' not null,
  mrmavoln    number(2,0) default 0 not null,
  mrhidate    varchar2(8) default ' ' not null,
  mrhitime    varchar2(8) default ' ' not null,
  mrhiloc     varchar2(4) default ' ' not null,
  mrhirecv    varchar2(6) default ' ' not null,
  mrhireas    varchar2(4) default ' ' not null,
  mrhioper    varchar2(6) default ' ' not null,
  mrhiddue    varchar2(8) default ' ' not null,
  mrhistat    varchar2(1) default ' ' not null,
  mrhireqb    varchar2(35) default ' ' not null,
  mrhiusid    varchar2(10) default ' ' not null,
  mrhiextn    varchar2(20) default ' ' not null,
  mrhipage    varchar2(20) default ' ' not null,
  mrhahhos    varchar2(3) default ' ' not null,
  mrquspar    varchar2(29) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint mrtquea1 primary key( 
dmrqumes)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
