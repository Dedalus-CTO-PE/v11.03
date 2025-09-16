create table wathisaf
(
wthiurno    varchar2(8),
wthiproc    varchar2(9),
dwthipcn    varchar2(2),
wthiedat    varchar2(8),
dwthiucn    varchar2(4),
wthiprio    varchar2(3),
wthirank    number(6,0),
wthidat2    varchar2(8),
wthidat3    varchar2(8),
wthirdt3    varchar2(3),
wthibscd    varchar2(2),
wthidcgv    varchar2(8),
wthidbft    varchar2(8),
wthirecs    varchar2(1),
wthirtyp    varchar2(1),
wthircdt    varchar2(8),
wthibmdt    varchar2(8),
wthietim    varchar2(8),
wthiadte    varchar2(8),
wthiatim    varchar2(5),
wthiwebi    varchar2(10),
wthibcan    varchar2(3),
wthibook    varchar2(8),
wthidoct    varchar2(6),
wthibokc    varchar2(3),
wthiunit    varchar2(3),
wthiplst    varchar2(3),
wthistat    varchar2(1),
wthidat1    varchar2(8),
wthidtad    varchar2(8),
wthipodt    varchar2(8),
wthicodt    varchar2(8),
wthidrsa    varchar2(8),
wthidosa    varchar2(8),
wthiphsp    varchar2(3),
wthitrag    varchar2(4),
wthipchs    varchar2(3),
wthibpro    varchar2(2),
wthidtec    varchar2(8),
wthispfl    varchar2(3),
wthibrsr    varchar2(3),
wthihide    varchar2(1),
wthioldp    varchar2(9),
wthipchg    varchar2(3),
wthicsst    varchar2(1),
wthicsdt    varchar2(8),
wthicnfa    varchar2(8),
wthioldu    varchar2(8),
wthiassr    varchar2(10),
wthispar    varchar2(40),
lf          varchar2(1),
constraint wathisa1 primary key( 
wthiurno,
wthiproc,
dwthipcn,
wthiedat,
dwthiucn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym wathisaf for wathisaf;
create unique index wathisa2 on wathisaf
(
wthirecs,
wthiurno,
wthiproc,
dwthipcn,
wthiedat,
dwthiucn
)
  tablespace pas_indx; 
create unique index wathisa3 on wathisaf
(
wthiadte,
wthiurno,
wthiproc,
dwthipcn,
wthiedat,
dwthiucn
)
  tablespace pas_indx; 
create unique index wathisa4 on wathisaf
(
wthiurno,
wthiproc,
dwthipcn,
wthiedat,
wthietim,
dwthiucn
)
  tablespace pas_indx; 
