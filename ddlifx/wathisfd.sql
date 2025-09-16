create table wathisaf
(
wthiurno    char(8),
wthiproc    char(9),
dwthipcn    char(2),
wthiedat    char(8),
dwthiucn    char(4),
wthiprio    char(3),
wthirank    decimal(6,0),
wthidat2    char(8),
wthidat3    char(8),
wthirdt3    char(3),
wthibscd    char(2),
wthidcgv    char(8),
wthidbft    char(8),
wthirecs    char(1),
wthirtyp    char(1),
wthircdt    char(8),
wthibmdt    char(8),
wthietim    char(8),
wthiadte    char(8),
wthiatim    char(5),
wthiwebi    char(10),
wthibcan    char(3),
wthibook    char(8),
wthidoct    char(6),
wthibokc    char(3),
wthiunit    char(3),
wthiplst    char(3),
wthistat    char(1),
wthidat1    char(8),
wthidtad    char(8),
wthipodt    char(8),
wthicodt    char(8),
wthidrsa    char(8),
wthidosa    char(8),
wthiphsp    char(3),
wthitrag    char(4),
wthipchs    char(3),
wthibpro    char(2),
wthidtec    char(8),
wthispfl    char(3),
wthibrsr    char(3),
wthihide    char(1),
wthioldp    char(9),
wthipchg    char(3),
wthicsst    char(1),
wthicsdt    char(8),
wthicnfa    char(8),
wthioldu    char(8),
wthiassr    char(10),
wthispar    char(40),
lf          char(1)
);
create unique index wathisa1 on wathisaf
(
wthiurno,
wthiproc,
dwthipcn,
wthiedat,
dwthiucn
);
create unique index wathisa2 on wathisaf
(
wthirecs,
wthiurno,
wthiproc,
dwthipcn,
wthiedat,
dwthiucn
);
create unique index wathisa3 on wathisaf
(
wthiadte,
wthiurno,
wthiproc,
dwthipcn,
wthiedat,
dwthiucn
);
create unique index wathisa4 on wathisaf
(
wthiurno,
wthiproc,
dwthipcn,
wthiedat,
wthietim,
dwthiucn
);
revoke all on wathisaf from public ; 
grant select on wathisaf to public ; 
