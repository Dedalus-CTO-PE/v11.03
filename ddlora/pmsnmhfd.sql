create table pmsnmhaf
(
  pmnhxdat    varchar2(8) default ' ' not null,
  pmnhdhbc    varchar2(3) default ' ' not null,
  pmnhagen    varchar2(4) default ' ' not null,
  pmnhbtch    varchar2(5) default ' ' not null,
  pmnhpenv    varchar2(4) default ' ' not null,
  pmnhstat    varchar2(1) default ' ' not null,
  pmnhfdat    varchar2(8) default ' ' not null,
  pmnhtdat    varchar2(8) default ' ' not null,
  pmnhfver    varchar2(6) default ' ' not null,
  pmnhfnam    varchar2(12) default ' ' not null,
  pmnhrecs    varchar2(5) default ' ' not null,
  pmnhproc    varchar2(5) default ' ' not null,
  pmnhrdel    varchar2(5) default ' ' not null,
  pmnhrins    varchar2(5) default ' ' not null,
  pmnhrrej    varchar2(5) default ' ' not null,
  pmnhldat    varchar2(8) default ' ' not null,
  pmnhusrs    varchar2(10) default ' ' not null,
  pmnhudat    varchar2(8) default ' ' not null,
  pmnhutim    varchar2(8) default ' ' not null,
  pmnhspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmsnmha1 primary key( 
pmnhxdat,
pmnhdhbc,
pmnhbtch,
pmnhstat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
