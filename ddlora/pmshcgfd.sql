create table pmshcgaf
(
  pmhgprac    varchar2(10) default ' ' not null,
  pmhgcntr    varchar2(2) default ' ' not null,
  pmhgtype    varchar2(2) default ' ' not null,
  pmhgspcd    varchar2(10) default ' ' not null,
  pmhgpnam    varchar2(80) default ' ' not null,
  pmhgadd1    varchar2(60) default ' ' not null,
  pmhgadd2    varchar2(60) default ' ' not null,
  pmhgadd3    varchar2(60) default ' ' not null,
  pmhgadd4    varchar2(60) default ' ' not null,
  pmhgadd5    varchar2(60) default ' ' not null,
  pmhgadd6    varchar2(60) default ' ' not null,
  pmhgpost    varchar2(8) default ' ' not null,
  pmhgstat    varchar2(4) default ' ' not null,
  pmhgpeml    varchar2(80) default ' ' not null,
  pmhgptel    varchar2(20) default ' ' not null,
  pmhgpfax    varchar2(20) default ' ' not null,
  pmhgpstt    varchar2(30) default ' ' not null,
  pmhgppcn    varchar2(30) default ' ' not null,
  pmhgppno    varchar2(10) default ' ' not null,
  pmhgfmdt    varchar2(8) default ' ' not null,
  pmhgdsdt    varchar2(8) default ' ' not null,
  pmhggpfh    varchar2(5) default ' ' not null,
  pmhgdtfa    varchar2(8) default ' ' not null,
  pmhgdtfe    varchar2(8) default ' ' not null,
  pmhggppi    varchar2(1) default ' ' not null,
  pmhgupfl    varchar2(1) default ' ' not null,
  pmhgstts    varchar2(1) default ' ' not null,
  pmhgpcgc    varchar2(5) default ' ' not null,
  pmhgprmk    varchar2(1) default ' ' not null,
  pmhgcdte    varchar2(8) default ' ' not null,
  pmhgctim    varchar2(8) default ' ' not null,
  pmhgwebc    varchar2(10) default ' ' not null,
  pmhglupd    varchar2(8) default ' ' not null,
  pmhglupt    varchar2(8) default ' ' not null,
  pmhgwebu    varchar2(10) default ' ' not null,
  pmhghpio    varchar2(20) default ' ' not null,
  pmhgfxds    varchar2(1) default ' ' not null,
  pmhgelds    varchar2(1) default ' ' not null,
  pmhgpsci    varchar2(20) default ' ' not null,
  pmhgsmd1    varchar2(16) default ' ' not null,
  pmhgsmd2    varchar2(16) default ' ' not null,
  pmhgspar    varchar2(46) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pmshcga1 primary key( 
pmhgprac,
pmhgcntr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pmshcga2 on pmshcgaf
(
pmhgadd1,
pmhgprac,
pmhgcntr
)
  tablespace pas_indx; 
