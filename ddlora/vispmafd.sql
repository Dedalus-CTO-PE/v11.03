create table vispmaaf
(
vspmvisn    varchar2(8),
vspmpayc    varchar2(6),
vspmmacn    varchar2(15),
vspmmnam    varchar2(60),
vspmrltp    varchar2(2),
vspmmpid    varchar2(17),
vspmmpit    varchar2(2),
vspmmad1    varchar2(35),
vspmmad2    varchar2(35),
vspmmad3    varchar2(35),
vspmmad4    varchar2(35),
vspmmpcd    varchar2(10),
vspmeamt    number(14,2),
vspmepec    number(3,0),
vspmcdat    varchar2(8),
vspmctim    varchar2(8),
vspmcuid    varchar2(10),
vspmudat    varchar2(8),
vspmutim    varchar2(8),
vspmuuid    varchar2(10),
vspmspar    varchar2(26),
lf          varchar2(1),
constraint vispmaa1 primary key( 
vspmvisn,
vspmmacn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym vispmaaf for vispmaaf;
create unique index vispmaa2 on vispmaaf
(
vspmvisn,
vspmpayc,
vspmmacn
)
  tablespace pas_indx; 
