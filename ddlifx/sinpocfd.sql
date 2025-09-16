create table sinaudpc
(
sipcaudd    char(8),
sipcaudt    char(8),
sipcaudp    char(2),
sipcaudr    char(1),
sipcauds    decimal(1,0),
sipcaudo    char(4),
sipcpon     char(7),
sipcitm     char(3),
sipccst     char(5),
sipcprd     char(5),
sipcdat     char(6),
sipcwar     char(5),
sipccat     char(7),
sipcpn      char(30),
sipcpd      char(30),
sipccon     char(10),
sipccdt     char(8),
sipcsut     char(15),
sipcedd     char(8),
sipcfdd     char(8),
sipcoqt     decimal(14,2),
sipciqt     decimal(14,2),
sipcrqt     decimal(14,2),
sipcect     decimal(16,4),
sipcgsta    decimal(16,4),
sipctcr     decimal(14,2),
sipctgs     decimal(14,2),
sipctin     decimal(14,2),
sipcigs     decimal(14,2),
sipcoqo     decimal(14,2),
sipcoop     decimal(16,4),
sipcogs     decimal(16,4),
sipcgst     char(6),
sipcur1     char(15),
sipcur2     char(15),
sipcud1     char(8),
sipcud2     char(8),
sipcuy1     char(1),
sipcuy2     char(1),
sipcspa     char(18),
lf          char(1)
);
create index sinaudpc on sinaudpc
(
sipcaudd,
sipcaudt,
sipcaudp,
sipcaudr
);
revoke all on sinaudpc from public ; 
grant select on sinaudpc to public ; 
create table sinpocaf
(
sipcpon     char(7),
sipcitm     char(3),
sipccst     char(5),
sipcprd     char(5),
sipcdat     char(6),
sipcwar     char(5),
sipccat     char(7),
sipcpn      char(30),
sipcpd      char(30),
sipccon     char(10),
sipccdt     char(8),
sipcsut     char(15),
sipcedd     char(8),
sipcfdd     char(8),
sipcoqt     decimal(14,2),
sipciqt     decimal(14,2),
sipcrqt     decimal(14,2),
sipcect     decimal(16,4),
sipcgsta    decimal(16,4),
sipctcr     decimal(14,2),
sipctgs     decimal(14,2),
sipctin     decimal(14,2),
sipcigs     decimal(14,2),
sipcoqo     decimal(14,2),
sipcoop     decimal(16,4),
sipcogs     decimal(16,4),
sipcgst     char(6),
sipcur1     char(15),
sipcur2     char(15),
sipcud1     char(8),
sipcud2     char(8),
sipcuy1     char(1),
sipcuy2     char(1),
sipcspa     char(18),
lf          char(1)
);
create unique index sinpoca1 on sinpocaf
(
sipcpon,
sipcitm
);
create unique index sinpoca2 on sinpocaf
(
sipccst,
sipcdat,
sipcpon,
sipcitm
);
create unique index sinpoca3 on sinpocaf
(
sipccat,
sipcdat,
sipcpon,
sipcitm
);
create unique index sinpoca4 on sinpocaf
(
sipcprd,
sipcdat,
sipcpon,
sipcitm
);
create unique index sinpoca5 on sinpocaf
(
sipccst,
sipcedd,
sipcpon,
sipcitm
);
create unique index sinpoca6 on sinpocaf
(
sipccat,
sipcedd,
sipcpon,
sipcitm
);
create  index sinpoca7 on sinpocaf
(
sipcdat
);
create  index sinpoca8 on sinpocaf
(
sipccat,
sipcpd
);
revoke all on sinpocaf from public ; 
grant select on sinpocaf to public ; 
