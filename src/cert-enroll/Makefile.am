sbin_SCRIPTS = cert-enroll

cert-enroll : cert-enroll.in
	$(AM_V_GEN) \
	sed \
	-e "s:@SYSCONFDIR@:$(sysconfdir):" \
	-e "s:@SBINDIR@:$(sbindir):" \
	-e "s:@BINDIR@:$(bindir):" \
	$(srcdir)/$@.in > $@

cert_enrolldir = $(sysconfdir)/cert-enroll.d
cert_enroll_DATA = cert-enroll.conf cert-install.conf

cert-install.conf : cert-install.conf.in
	$(AM_V_GEN) \
	sed \
	-e "s:@SYSCONFDIR@:$(sysconfdir):" \
	-e "s:@SBINDIR@:$(sbindir):" \
	$(srcdir)/$@.in > $@

man8_MANS = cert-enroll.8

CLEANFILES = $(man8_MANS) cert-enroll cert-install.conf

if USE_CERT_ENROLL_TIMER
systemdsystemunit_DATA = cert-enroll.service cert-enroll.timer

cert-enroll.service : cert-enroll.service.in
	$(AM_V_GEN) \
	sed \
	-e "s:@SBINDIR@:$(sbindir):" \
	$(srcdir)/$@.in > $@

CLEANFILES += cert-enroll.service
endif

