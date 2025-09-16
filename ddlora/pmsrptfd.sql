create table pmsrptaf
(
dpmrpmes    varchar2(20),
pmrpurno    varchar2(8),
pmrptitl    varchar2(4),
pmrpsnam    varchar2(20),
pmrpgnam    varchar2(25),
pmrpadd1    varchar2(35),
pmrpadd2    varchar2(35),
pmrpadd3    varchar2(35),
pmrpadd4    varchar2(35),
pmrppost    varchar2(8),
pmrptelp    varchar2(20),
pmrptelb    varchar2(20),
pmrppsex    varchar2(1),
pmrppdob    varchar2(8),
pmrpmedi    varchar2(11),
pmrpceas    varchar2(1),
pmrpdofd    varchar2(8),
pmrpalid    varchar2(20),
pmrpmobl    varchar2(20),
pmrpusid    varchar2(10),
pmrpexpd    varchar2(8),
pmrpcons    varchar2(10),
pmrprfgp    varchar2(10),
pmrpmexp    varchar2(6),
pmrppad1    varchar2(35),
pmrppad2    varchar2(35),
pmrppad3    varchar2(35),
pmrppad4    varchar2(35),
pmrpppcd    varchar2(8),
pmrpspar    varchar2(23),
lf          varchar2(1),
constraint pmsrpta1 primary key( 
dpmrpmes)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsrptaf for pmsrptaf;
create unique index pmsrpta2 on pmsrptaf
(
pmrpurno,
dpmrpmes
)
  tablespace pas_indx; 
