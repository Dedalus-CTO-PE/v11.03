create table pmsrflaf
(
pmrfurno    varchar2(8),
pmrfcons    varchar2(10),
pmrfexpd    varchar2(8),
pmrfrfgp    varchar2(10),
pmrfcdat    varchar2(8),
pmrfctim    varchar2(8),
pmrfcuid    varchar2(10),
pmrfudat    varchar2(8),
pmrfutim    varchar2(8),
pmrfuuid    varchar2(10),
pmrfspar    varchar2(50),
lf          varchar2(1),
constraint pmsrfla1 primary key( 
pmrfurno,
pmrfcons,
pmrfexpd)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsrflaf for pmsrflaf;
