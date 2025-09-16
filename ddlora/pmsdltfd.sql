create table pmsdltaf
(
pmdsseli    varchar2(4),
pmdsdesc    varchar2(35),
pmdshcpf    varchar2(10),
pmdshcpt    varchar2(10),
pmdspsfr    varchar2(3),
pmdspsto    varchar2(3),
pmdsasfr    varchar2(3),
pmdsasto    varchar2(3),
pmdshosp    varchar2(3),
pmdspref    varchar2(3),
pmdsfadf    varchar2(8),
pmdsfadt    varchar2(8),
pmdsladf    varchar2(8),
pmdsladt    varchar2(8),
pmdshcst    varchar2(2),
pmdsatyp    varchar2(3),
pmdsyacf    varchar2(2),
pmdsyact    varchar2(2),
pmdsinsc    varchar2(6),
pmdsidff    varchar2(8),
pmdsidft    varchar2(8),
pmdsidtf    varchar2(8),
pmdsidtt    varchar2(8),
pmdsactv    varchar2(1),
pmdsspar    varchar2(50),
lf          varchar2(1),
constraint pmsdlta1 primary key( 
pmdsseli)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsdltaf for pmsdltaf;
