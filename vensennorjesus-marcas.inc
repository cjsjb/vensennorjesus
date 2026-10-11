\context ChordNames \chords {
	$(if (>= (cadr (ly:version)) 24)
		#{ \set Score.rehearsalMarkFormatter = #format-mark-box-numbers #}
		#{ \set Score.markFormatter = #format-mark-box-numbers #})

	% intro
	\mark \default
	\skip 1*2

	% Tu, Sennor, sabes bien...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Tu, Sennor, hasta hoy...
	\mark \default
	\skip 1*4
	\skip 1*4

	% Por eso ven, Sennor Jesus...
	\mark \default
	\skip 1*4

	% Ven, Sennor Jesus...
	\mark \default
	\skip 1*4
	%\skip 1*1
}
