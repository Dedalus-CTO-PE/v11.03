create table watesiaf
(
wteiuniq    char(8),
wteidate    char(8),
wteiurno    char(10),
wteimedc    char(11),
wteimeds    char(3),
wteiwtno    char(2),
wteidob     char(8),
wteisex     char(1),
wteipstc    char(4),
wteiloca    char(30),
wteiproc    char(3),
wteisrgs    char(2),
wteiclct    char(1),
wteiilos    char(1),
wteidtrg    char(8),
wteisrcr    char(1),
wteirefh    char(4),
wteicldt    char(8),
wteidtin    char(8),
wteiclcd    char(1),
wteiltst    char(1),
wteipsdt    char(8),
wteirfcs    char(1),
wteibkdt    char(8),
wteibkno    char(2),
wteirebk    char(1),
wteiscdt    char(8),
wteidtrm    char(8),
wteirrem    char(1),
wteiinsd    char(1),
wteitrnd    char(4),
wteinrfc    char(4),
wteinrre    char(4),
wteinrlc    char(4),
wteihosp    char(2),
wteispar    char(50),
lf          char(1)
);
create unique index watesia1 on watesiaf
(
wteiuniq,
wteidate
);
create unique index watesia2 on watesiaf
(
wteidate,
wteiuniq
);
revoke all on watesiaf from public ; 
grant select on watesiaf to public ; 
