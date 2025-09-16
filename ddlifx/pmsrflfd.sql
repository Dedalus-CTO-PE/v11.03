create table pmsrflaf
(
pmrfurno    char(8),
pmrfcons    char(10),
pmrfexpd    char(8),
pmrfrfgp    char(10),
pmrfcdat    char(8),
pmrfctim    char(8),
pmrfcuid    char(10),
pmrfudat    char(8),
pmrfutim    char(8),
pmrfuuid    char(10),
pmrfspar    char(50),
lf          char(1)
);
create unique index pmsrfla1 on pmsrflaf
(
pmrfurno,
pmrfcons,
pmrfexpd
);
revoke all on pmsrflaf from public ; 
grant select on pmsrflaf to public ; 
