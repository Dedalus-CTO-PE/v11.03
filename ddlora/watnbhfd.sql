create table watnbhaf
(
  wtnhxdat    varchar2(8) default ' ' not null,
  wtnhdhbc    varchar2(3) default ' ' not null,
  wtnhagen    varchar2(4) default ' ' not null,
  wtnhbtch    varchar2(5) default ' ' not null,
  wtnhpenv    varchar2(4) default ' ' not null,
  wtnhstat    varchar2(1) default ' ' not null,
  wtnhfdat    varchar2(8) default ' ' not null,
  wtnhftim    varchar2(4) default ' ' not null,
  wtnhfver    varchar2(5) default ' ' not null,
  wtnhfnam    varchar2(12) default ' ' not null,
  wtnhrecs    varchar2(5) default ' ' not null,
  wtnhproc    varchar2(5) default ' ' not null,
  wtnhrdel    varchar2(5) default ' ' not null,
  wtnhrins    varchar2(5) default ' ' not null,
  wtnhrerr    varchar2(5) default ' ' not null,
  wtnhrwrn    varchar2(5) default ' ' not null,
  wtnhldat    varchar2(8) default ' ' not null,
  wtnhusrs    varchar2(10) default ' ' not null,
  wtnhudat    varchar2(8) default ' ' not null,
  wtnhutim    varchar2(8) default ' ' not null,
  wtnhspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint watnbha1 primary key( 
wtnhxdat,
wtnhdhbc,
wtnhbtch,
wtnhstat)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
