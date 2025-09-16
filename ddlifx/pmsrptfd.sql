create table pmsrptaf
(
dpmrpmes    char(20),
pmrpurno    char(8),
pmrptitl    char(4),
pmrpsnam    char(20),
pmrpgnam    char(25),
pmrpadd1    char(35),
pmrpadd2    char(35),
pmrpadd3    char(35),
pmrpadd4    char(35),
pmrppost    char(8),
pmrptelp    char(20),
pmrptelb    char(20),
pmrppsex    char(1),
pmrppdob    char(8),
pmrpmedi    char(11),
pmrpceas    char(1),
pmrpdofd    char(8),
pmrpalid    char(20),
pmrpmobl    char(20),
pmrpusid    char(10),
pmrpexpd    char(8),
pmrpcons    char(10),
pmrprfgp    char(10),
pmrpmexp    char(6),
pmrppad1    char(35),
pmrppad2    char(35),
pmrppad3    char(35),
pmrppad4    char(35),
pmrpppcd    char(8),
pmrpspar    char(23),
lf          char(1)
);
create unique index pmsrpta1 on pmsrptaf
(
dpmrpmes
);
create unique index pmsrpta2 on pmsrptaf
(
pmrpurno,
dpmrpmes
);
revoke all on pmsrptaf from public ; 
grant select on pmsrptaf to public ; 
